//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiveRoomCommentModelCenter, UIView;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface LiveRoomCommentBaseManager : NSObject
{
    _Bool _isRunning;
    _Bool _enableRecvMsg;
    _Bool _enableShowMsg;
    UIView *_view;
    LiveRoomCommentModelCenter *_modelCenter;
    double _timeIntervalForUpdateUI;
    NSObject<OS_dispatch_queue> *_commentUIQueue;
    NSObject<OS_dispatch_source> *_uiTimer;
}

+ (_Bool)enableSendCommentForSecurityIdentify;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *uiTimer; // @synthesize uiTimer=_uiTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *commentUIQueue; // @synthesize commentUIQueue=_commentUIQueue;
@property(nonatomic) double timeIntervalForUpdateUI; // @synthesize timeIntervalForUpdateUI=_timeIntervalForUpdateUI;
@property(nonatomic) _Bool enableShowMsg; // @synthesize enableShowMsg=_enableShowMsg;
@property(nonatomic) _Bool enableRecvMsg; // @synthesize enableRecvMsg=_enableRecvMsg;
@property(retain, nonatomic) LiveRoomCommentModelCenter *modelCenter; // @synthesize modelCenter=_modelCenter;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
- (void).cxx_destruct;
- (void)timerSelector:(id)arg1;
- (void)stopUIUpdateTimer;
- (void)startUIUpdateTimer;
- (_Bool)enableRefreshViewWithModels:(id)arg1;
- (void)refreshViewWithModels:(id)arg1;
- (void)buildView;
- (void)stopServerMsg;
- (void)requestServerMsg;
- (void)stopManager;
- (void)startManager;
- (void)dealloc;
- (id)init;

@end

