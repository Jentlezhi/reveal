//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBMediaSegmentUploadSessionDelegate-Protocol.h"
#import "WBMediaUploading-Protocol.h"

@class NSMutableArray, NSProgress, NSString, WBMediaItemUploadFlowSessionLogger, WBMediaPersistentObjectStore, WBMediaUploadContentSource, WBMediaUploadSessionSettings, WBMediaUploadSessionState, WBUploadURLSessionManager;
@protocol OS_dispatch_semaphore, WBMediaUploadProcessInfo, WBMediaUploadingDelegate, WBUploadURLSessionTask;

@interface WBMediaUploadSession : NSObject <WBMediaSegmentUploadSessionDelegate, WBMediaUploading>
{
    struct {
        unsigned int started:1;
        unsigned int startPhaseCompleted:1;
        unsigned int uploadPhaseStarted:1;
        unsigned int completed:1;
        unsigned int failed:1;
        unsigned int cancelled:1;
    } _flags;
    _Bool _didTryFallbackState;
    NSProgress *_progress;
    id <WBMediaUploadingDelegate> _delegate;
    WBMediaPersistentObjectStore *_mediaUploadObjectStore;
    id <WBMediaUploadProcessInfo> _processInfo;
    WBMediaUploadSessionSettings *_uploadSettings;
    NSMutableArray *_segmentUploadSessions;
    WBMediaUploadContentSource *_contentSource;
    WBMediaItemUploadFlowSessionLogger *_logger;
    WBUploadURLSessionManager *_networkClient;
    WBMediaUploadSessionState *_uploadState;
    NSObject<OS_dispatch_semaphore> *_uploadStateLock;
    id <WBUploadURLSessionTask> _finishRequestWrapper;
    id <WBUploadURLSessionTask> _resumeRequestWrapper;
}

@property(retain, nonatomic) id <WBUploadURLSessionTask> resumeRequestWrapper; // @synthesize resumeRequestWrapper=_resumeRequestWrapper;
@property(retain, nonatomic) id <WBUploadURLSessionTask> finishRequestWrapper; // @synthesize finishRequestWrapper=_finishRequestWrapper;
@property(nonatomic) _Bool didTryFallbackState; // @synthesize didTryFallbackState=_didTryFallbackState;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *uploadStateLock; // @synthesize uploadStateLock=_uploadStateLock;
@property(retain, nonatomic) WBMediaUploadSessionState *uploadState; // @synthesize uploadState=_uploadState;
@property(retain, nonatomic) WBUploadURLSessionManager *networkClient; // @synthesize networkClient=_networkClient;
@property(retain, nonatomic) WBMediaItemUploadFlowSessionLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) WBMediaUploadContentSource *contentSource; // @synthesize contentSource=_contentSource;
@property(retain, nonatomic) NSMutableArray *segmentUploadSessions; // @synthesize segmentUploadSessions=_segmentUploadSessions;
@property(retain, nonatomic) WBMediaUploadSessionSettings *uploadSettings; // @synthesize uploadSettings=_uploadSettings;
@property(retain, nonatomic) id <WBMediaUploadProcessInfo> processInfo; // @synthesize processInfo=_processInfo;
@property(nonatomic) __weak id <WBMediaUploadingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSProgress *progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)recoverUploadStateWithSettings:(id)arg1 processInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) WBMediaUploadSessionState *currentState;
- (void)_storeState;
- (void)updateStateWithUploadResult:(id)arg1;
- (void)updateStateWithFinishAddingAllSegments;
- (void)updateStateWithFinishedSegmentUpload:(id)arg1;
- (void)updateStateByAddingSegmentToBeUploaded:(id)arg1;
- (void)updateStateByReceivingUploadToken:(id)arg1;
@property(retain, nonatomic) WBMediaPersistentObjectStore *mediaUploadObjectStore; // @synthesize mediaUploadObjectStore=_mediaUploadObjectStore;
- (void)mediaSegmentUploadSessionDidFinish:(id)arg1;
- (void)mediaSegmentUploadSessionDidCancel:(id)arg1;
- (void)mediaSegmentUploadSession:(id)arg1 didFailWithError:(id)arg2;
- (void)_performFinishPhaseImplementationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performFinishPhase;
- (void)_tryFallbackState:(id)arg1;
- (void)_performUploadIfNeeded;
- (void)_failedWithError:(id)arg1;
- (void)_finishWithResult:(id)arg1;
- (_Bool)_isAtTerminalState;
- (void)cancel;
- (void)didFinishAddingAllSegments;
- (unsigned long long)indexOfSegment:(id)arg1;
- (void)addSegment:(id)arg1;
- (void)startUploadWithSettings:(id)arg1 processInfo:(id)arg2;
- (id)initWithContentSource:(id)arg1 networkClient:(id)arg2 logger:(id)arg3;
- (id)init;
- (void)makeUploadFailureWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

