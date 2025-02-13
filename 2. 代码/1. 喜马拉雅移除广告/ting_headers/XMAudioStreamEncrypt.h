//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMAudioStreamEncrypt : NSObject
{
    double key;
    double firstVal;
    struct xmMetaData decrptMetaData;
    CDUnknownBlockType _didExceptionBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType didExceptionBlock; // @synthesize didExceptionBlock=_didExceptionBlock;
- (void)destroyEncrypted;
- (id)decryptedV100DataI:(id)arg1;
- (id)decryptedV100Data:(id)arg1;
- (id)decryptedData:(id)arg1;
- (void)didDecrptedDataError:(id)arg1;
- (id)decryptedData:(id)arg1 firstBlock:(_Bool)arg2;
- (unsigned long long)getEncryptedBlockSize;
- (_Bool)encryptedMetaData:(id)arg1 toFilePath:(id)arg2;
- (_Bool)encryptedHeadMetaDataWithFilePath:(id)arg1;
- (id)encryptedData:(id)arg1;
- (_Bool)isEncryptedMetaData:(id)arg1;
- (id)encryptedV100Data:(id)arg1;
- (struct xmMetaData)getDecryptedMetaData:(id)arg1;
- (id)setV100EncrytedData;
- (int)initEncryptedUserId:(long long)arg1;
- (_Bool)checkValidate;
- (id)initPrivate;
- (id)init;
- (void)dealloc;

@end

