//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMA_MonitorHandler, MMA_ViewStatus, NSDictionary, NSMutableArray;
@protocol OS_dispatch_source;

@interface MMA_ViewabilityMonitor : NSObject
{
    _Bool _statusResult;
    _Bool _oldResult;
    _Bool _finallVisibleResult;
    int _timeInterval;
    int _area;
    int _maxRecordCount;
    long long _timeThreshold;
    double _trackStartTime;
    long long _videoType;
    NSMutableArray *_statusList;
    MMA_MonitorHandler *_monitorHandler;
    long long _viewabilityStartTime;
    long long _trackingTimerOut;
    long long _handleId;
    NSObject<OS_dispatch_source> *_timer;
    MMA_ViewStatus *_viewStatus;
    long long _mediaType;
    NSDictionary *_logParameter;
    NSMutableArray *_trackModelArray;
}

+ (void)stopTrackTimer:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *trackModelArray; // @synthesize trackModelArray=_trackModelArray;
@property(copy, nonatomic) NSDictionary *logParameter; // @synthesize logParameter=_logParameter;
@property(nonatomic) _Bool finallVisibleResult; // @synthesize finallVisibleResult=_finallVisibleResult;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) MMA_ViewStatus *viewStatus; // @synthesize viewStatus=_viewStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) int maxRecordCount; // @synthesize maxRecordCount=_maxRecordCount;
@property(nonatomic) long long handleId; // @synthesize handleId=_handleId;
@property(nonatomic) int area; // @synthesize area=_area;
@property(nonatomic) int timeInterval; // @synthesize timeInterval=_timeInterval;
@property(nonatomic) long long trackingTimerOut; // @synthesize trackingTimerOut=_trackingTimerOut;
@property(nonatomic) long long viewabilityStartTime; // @synthesize viewabilityStartTime=_viewabilityStartTime;
@property(nonatomic) _Bool oldResult; // @synthesize oldResult=_oldResult;
@property(nonatomic) _Bool statusResult; // @synthesize statusResult=_statusResult;
@property(retain, nonatomic) MMA_MonitorHandler *monitorHandler; // @synthesize monitorHandler=_monitorHandler;
@property(retain, nonatomic) NSMutableArray *statusList; // @synthesize statusList=_statusList;
@property(readonly, nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(nonatomic) double trackStartTime; // @synthesize trackStartTime=_trackStartTime;
@property(nonatomic) long long timeThreshold; // @synthesize timeThreshold=_timeThreshold;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addStatus;
- (void)setPercentageViewable;
- (_Bool)runningInForeground;
- (void)configViewableStatus;
- (void)timerHandleMidPointMonitor;
- (void)timerHandleViewability;
- (void)startTimer;
- (void)startTrackTimer;
- (id)initWithUrlModel:(id)arg1 monitorHandler:(id)arg2 mediaType:(long long)arg3 logParameter:(id)arg4;

@end

