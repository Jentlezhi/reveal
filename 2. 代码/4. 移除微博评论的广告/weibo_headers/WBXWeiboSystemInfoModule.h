//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBXAbstractModule.h"

@interface WBXWeiboSystemInfoModule : WBXAbstractModule
{
}

+ (id)wx_export_method_31;
+ (id)wx_export_method_multi_param_30;
+ (id)wx_export_method_sync_29;
- (struct WBXModuleMapping)convertWithModuleMethodParam:(struct WBXModuleMapping)arg1;
- (void)wbGetAlertTypeNotificationSetting:(id)arg1;
- (void)getWeiboSystemInfoWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2 complete:(CDUnknownBlockType)arg3;
- (id)getWeiboSystemInfoSync;

@end

