//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBExtensionsManager : NSObject
{
}

+ (id)sharedManager;
- (void)logStickerActionData;
- (void)logNotificationContentData;
- (void)logNotificationData;
- (void)logHotWeiboWidgetActionData;
- (void)sethotWeiboWidgetAccountUID;
- (void)logFastEntranceWidgetActionData;
- (void)logHotSearchWidgetActionData;
- (void)logWidgetShareData;
- (id)gdid;
- (id)accountAuth;
- (id)userSetting;
- (void)setSharedParamsWithAccount:(id)arg1;
- (void)removeSharedParams;
- (void)showTodayWidget:(_Bool)arg1;
- (void)currentAccountDidChangeNotification:(id)arg1;
- (void)appWillEnterForeground;
- (void)dealloc;
- (id)init;

@end

