//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBAd3rdMonitor : NSObject
{
}

+ (void)ad3rdMonitorClickWithStatus:(id)arg1 code:(id)arg2 actionEvent:(unsigned long long)arg3;
+ (void)ad3rdMonitorClickWithPromotion:(id)arg1 code:(id)arg2 actionEventType:(unsigned long long)arg3;
+ (_Bool)ad3rdMonitorVerifyCode:(id)arg1 monitor_mask:(id)arg2 newMonitorMask:(id)arg3 actionEventType:(unsigned long long)arg4;
+ (void)ad3rdMonitorClickWithPromotion:(id)arg1 code:(id)arg2 actionEvent:(unsigned long long)arg3;
+ (_Bool)ad3rdMonitorVerifyCode:(id)arg1 monitor_mask:(id)arg2 newMonitorMask:(id)arg3 actionEvent:(unsigned long long)arg4;
+ (void)ad3rdMoniterClickCardPromotion:(id)arg1;
+ (void)ad3rdMoniterViewCardPromotion:(id)arg1;
+ (void)ad3rdMoniterClickCard:(id)arg1;
+ (void)ad3rdMoniterViewCard:(id)arg1;
+ (id)ad3rdMoniterSecsForPromotion:(id)arg1;
+ (void)ad3rdMoniterSecs:(id)arg1 forPromotion:(id)arg2;
+ (void)ad3rdMoniterClickPromotion:(id)arg1 code:(id)arg2;
+ (void)ad3rdMoniterViewPromotion:(id)arg1;
+ (void)ad3rdMoniterClickStatus:(id)arg1 code:(id)arg2;
+ (void)ad3rdMoniterViewStatus:(id)arg1;
+ (void)monitorForHighlightStatus:(id)arg1;
+ (void)monitorSecs:(id)arg1 forStatus:(id)arg2;
+ (void)monitorSec:(long long)arg1 forStatus:(id)arg2;
+ (id)monitorSecsForStatus:(id)arg1;
+ (id)sharedInstance;
- (void)monitorLoadCodeConfigure;
- (void)dealloc;
- (void)p_3rdNormalExpoForStatus:(id)arg1;
- (void)p_internalExpoForStatus:(id)arg1;
- (void)wbVideoItemUpdated:(id)arg1;
- (void)wbStatusUpdated:(id)arg1;
- (void)private_setupNotification;

@end

