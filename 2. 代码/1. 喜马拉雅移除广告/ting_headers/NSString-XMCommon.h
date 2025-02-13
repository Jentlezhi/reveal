//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (XMCommon)
+ (id)friendlyTimeStringWithTimeIntervalSince1970:(double)arg1;
+ (_Bool)isEmpty:(id)arg1;
+ (float)deCodedFloatString:(id)arg1;
+ (double)deCodedDoubleString:(id)arg1;
+ (id)encodeFloatToBigEndian:(float)arg1;
+ (id)encodeFloat:(float)arg1;
+ (id)encodeDouble:(double)arg1;
+ (id)simpleDeEncryptKey:(id)arg1;
+ (id)simpleEncryptKey:(id)arg1;
+ (id)xmEncryptor;
+ (id)RSAStringFromString:(id)arg1;
+ (id)aes256_decrypt:(id)arg1 Decrypttext:(id)arg2;
+ (id)aes256_encrypt:(id)arg1 Encrypttext:(id)arg2;
- (long long)versionCompare:(id)arg1;
- (_Bool)newerOrEqualVersionThan:(id)arg1;
- (_Bool)newerVersionThan:(id)arg1;
- (_Bool)olderOrEqualVersionThan:(id)arg1;
- (_Bool)olderVersionThan:(id)arg1;
- (id)URLQueryDictionaryByRemovingPercentEncoding:(_Bool)arg1;
- (id)URLQueryDictionary;
- (id)URLEncodedStringWithCFStringEncoding:(unsigned int)arg1;
- (id)URLEncodedString;
- (id)stringWithURLEncoded;
- (id)URLStringByAppendingQueryString:(id)arg1;
- (struct CGSize)xm_stringSizeWithAttributes:(id)arg1 preferredLayoutWidth:(double)arg2;
- (double)xm_stringWidthWithFont:(id)arg1 fitHeight:(double)arg2;
- (double)xm_stringHeightWithFont:(id)arg1 fitWidth:(double)arg2;
- (id)stringByTrimmingWhitespaceAndNewlineCharacter;
- (id)formatBigNumber;
- (_Bool)containsString:(id)arg1 caseSensitive:(_Bool)arg2;
- (_Bool)containsString:(id)arg1;
- (id)paramsToDictionary;
- (id)sha1HashString;
- (id)hashString;
- (unsigned long long)getXMTextLength;
- (unsigned long long)getUTF8Length;
- (id)base64DecodedData;
- (id)base64DecodedString;
- (id)base64EncodedString;
@end

