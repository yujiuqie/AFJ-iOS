//
//  IFHefeFilter.m
//  GPUImage-Instagram
//
//  Created by Kim Daewook.
//  Copyright (c) 2015 Kim Daewook. All rights reserved.
//

#import "IFHefeFilter.h"

NSString *const kIFHefeShaderString = SHADER_STRING
                                      (
                                              precision lowp float;

                                              varying highp vec2 textureCoordinate;

                                              uniform sampler2D inputImageTexture;
                                              uniform sampler2D inputImageTexture2;  //edgeBurn
                                              uniform sampler2D inputImageTexture3;  //hefeMap
                                              uniform sampler2D inputImageTexture4;  //hefeGradientMap
                                              uniform sampler2D inputImageTexture5;  //hefeSoftLight
                                              uniform sampler2D inputImageTexture6;  //hefeMetal

                                              void main() {
                                                  vec3 texel = texture2D(inputImageTexture, textureCoordinate).rgb;
                                                  vec3 edge = texture2D(inputImageTexture2, textureCoordinate).rgb;
                                                  texel = texel * edge;

                                                  texel = vec3(
                                                          texture2D(inputImageTexture3, vec2(texel.r, .16666)).r,
                                                          texture2D(inputImageTexture3, vec2(texel.g, .5)).g,
                                                          texture2D(inputImageTexture3, vec2(texel.b, .83333)).b);

                                                  vec3 luma = vec3(.30, .59, .11);
                                                  vec3 gradSample = texture2D(inputImageTexture4, vec2(dot(luma, texel), .5)).rgb;
                                                  vec3 final = vec3(
                                                          texture2D(inputImageTexture5, vec2(gradSample.r, texel.r)).r,
                                                          texture2D(inputImageTexture5, vec2(gradSample.g, texel.g)).g,
                                                          texture2D(inputImageTexture5, vec2(gradSample.b, texel.b)).b
                                                  );

                                                  vec3 metal = texture2D(inputImageTexture6, textureCoordinate).rgb;
                                                  vec3 metaled = vec3(
                                                          texture2D(inputImageTexture5, vec2(metal.r, texel.r)).r,
                                                          texture2D(inputImageTexture5, vec2(metal.g, texel.g)).g,
                                                          texture2D(inputImageTexture5, vec2(metal.b, texel.b)).b
                                                  );

                                                  gl_FragColor = vec4(metaled, 1.0);
                                              }
                                      );

@implementation IFHefeFilter
- (id)init {
    self = [super initWithFragmentShaderFromString:kIFHefeShaderString
                                           sources:@[
                                                   [IFImageFilter filterImageNamed:@"edgeBurn"],
                                                   [IFImageFilter filterImageNamed:@"hefeMap"],
                                                   [IFImageFilter filterImageNamed:@"hefeGradientMap"],
                                                   [IFImageFilter filterImageNamed:@"hefeSoftLight"],
                                                   [IFImageFilter filterImageNamed:@"hefeMetal"],

                                           ]];
    return self;
}


@end
