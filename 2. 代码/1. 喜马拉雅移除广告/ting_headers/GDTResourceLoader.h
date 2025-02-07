//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTResourceLoadingRequestWorkerDelegate-Protocol.h"

@class NSMutableArray, NSString, NSURL;
@protocol GDTResourceLoaderDelegate;

@interface GDTResourceLoader : NSObject <GDTResourceLoadingRequestWorkerDelegate>
{
    _Bool _cancelled;
    NSURL *_url;
    id <GDTResourceLoaderDelegate> _delegate;
    NSMutableArray *_pendingRequestWorkers;
}

@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSMutableArray *pendingRequestWorkers; // @synthesize pendingRequestWorkers=_pendingRequestWorkers;
@property(nonatomic) __weak id <GDTResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)startWorkerWithRequest:(id)arg1;
- (void)resourceLoadingRequestWorker:(id)arg1 didCompleteWithError:(id)arg2;
- (void)cancel;
- (void)removeRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

