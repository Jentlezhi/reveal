//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class YYThreadSafeArray;
@protocol XMLivePopProtocol;

@interface XMLivePopQueueManager : NSObject
{
    _Bool _freezeQueue;
    _Bool _popShow;
    id <XMLivePopProtocol> _livePop;
    YYThreadSafeArray *_queue;
}

+ (id)manager;
- (void).cxx_destruct;
@property(retain, nonatomic) YYThreadSafeArray *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <XMLivePopProtocol> livePop; // @synthesize livePop=_livePop;
@property(nonatomic) _Bool popShow; // @synthesize popShow=_popShow;
@property(nonatomic) _Bool freezeQueue; // @synthesize freezeQueue=_freezeQueue;
- (void)_trigePop;
- (void)cancelAllPopQueue;
- (void)dequeueLivePopFinish:(CDUnknownBlockType)arg1;
- (void)enqueueLivePop:(CDUnknownBlockType)arg1 finish:(CDUnknownBlockType)arg2;
- (void)multiEnqueueLivePop:(CDUnknownBlockType)arg1 finish:(CDUnknownBlockType)arg2 count:(long long)arg3;
- (id)init;

@end

