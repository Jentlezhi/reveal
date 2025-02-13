//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSOperationQueue;
@protocol OS_dispatch_semaphore;

@interface XMUploadManager : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSMutableArray *_verifyCodeDoneBlocks;
    NSMutableArray *_verifyCodeErrorBlocks;
    NSOperationQueue *_operationQueue;
}

+ (id)contenTypeWithFileType:(long long)arg1;
+ (id)fileNameWithFileType:(long long)arg1;
+ (id)xmUploadUrlStrWithFileType:(long long)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMutableArray *verifyCodeErrorBlocks; // @synthesize verifyCodeErrorBlocks=_verifyCodeErrorBlocks;
@property(retain, nonatomic) NSMutableArray *verifyCodeDoneBlocks; // @synthesize verifyCodeDoneBlocks=_verifyCodeDoneBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (void).cxx_destruct;
- (void)startResumeUpload:(id)arg1;
@property(readonly, nonatomic) unsigned long long uploadCount;
- (void)setMaxConcurrentUploads:(long long)arg1;
- (void)cancelUploader:(id)arg1;
- (void)cancelAllUploads;
- (void)startUpload:(id)arg1;
- (id)startUploadWithFile:(id)arg1 andFileType:(long long)arg2 requestPlugins:(id)arg3 progress:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5 complete:(CDUnknownBlockType)arg6;
- (id)startUploadWithFile:(id)arg1 andFileType:(long long)arg2 progress:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4 complete:(CDUnknownBlockType)arg5;
- (id)startUploadWithData:(id)arg1 andFileType:(long long)arg2 requestPlugins:(id)arg3 progress:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5 complete:(CDUnknownBlockType)arg6;
- (id)startUploadWithData:(id)arg1 andFileType:(long long)arg2 progress:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4 complete:(CDUnknownBlockType)arg5;
- (id)startUploadWithURL:(id)arg1 requestPlugins:(id)arg2 append:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5 complete:(CDUnknownBlockType)arg6;
- (id)startUploadWithURL:(id)arg1 cookie:(_Bool)arg2 append:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5 complete:(CDUnknownBlockType)arg6;
- (id)startUploadWithURL:(id)arg1 append:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4 complete:(CDUnknownBlockType)arg5;
- (id)startUploadWithType:(long long)arg1 requestPlugins:(id)arg2 append:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5 complete:(CDUnknownBlockType)arg6;
- (id)startUploadWithType:(long long)arg1 append:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4 complete:(CDUnknownBlockType)arg5;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)progressVerificationCode:(id)arg1;
- (CDUnknownBlockType)addVerifyCodeToErrorBlock:(CDUnknownBlockType)arg1 verifyCodeDoneBlock:(CDUnknownBlockType)arg2 verifyCodeCancelBlock:(CDUnknownBlockType)arg3;

@end

