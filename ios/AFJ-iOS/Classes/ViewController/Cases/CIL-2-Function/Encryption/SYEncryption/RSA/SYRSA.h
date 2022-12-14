//
//  SYRSA.h
//  SYEncryptionDemo
//
//  Created by bcmac3 on 09/12/2016.
//  Copyright © 2016 ShenYang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SYRSA : NSObject

// return base64 encoded string
+ (NSString *)encryptString:(NSString *)str publicKey:(NSString *)pubKey;

// return raw data
+ (NSData *)encryptData:(NSData *)data publicKey:(NSString *)pubKey;

// return base64 encoded string
+ (NSString *)encryptString:(NSString *)str privateKey:(NSString *)privKey;

// return raw data
+ (NSData *)encryptData:(NSData *)data privateKey:(NSString *)privKey;

// decrypt base64 encoded string, convert result to string(not base64 encoded)
+ (NSString *)decryptString:(NSString *)str publicKey:(NSString *)pubKey;

+ (NSData *)decryptData:(NSData *)data publicKey:(NSString *)pubKey;

+ (NSString *)decryptString:(NSString *)str privateKey:(NSString *)privKey;

+ (NSData *)decryptData:(NSData *)data privateKey:(NSString *)privKey;

@end
