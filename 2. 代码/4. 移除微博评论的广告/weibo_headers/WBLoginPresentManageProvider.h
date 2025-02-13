//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WeiboCubeLoginPresentManagerProtocol-Protocol.h"

@class NSString;

@interface WBLoginPresentManageProvider : NSObject <WeiboCubeLoginPresentManagerProtocol>
{
}

+ (id)shareProvider;
- (void)showVIPPayViewinController:(id)arg1 WithUserID:(id)arg2 Parameters:(id)arg3;
- (void)hudShowErrorInfo:(id)arg1;
- (long long)wb_lastInterceptadDaysFromNow:(id)arg1;
- (long long)needPhoneBinded;
- (void)showQuickBindPhoneViewWithTitle:(id)arg1 inController:(id)arg2 withCancelBlock:(CDUnknownBlockType)arg3 withComposeBlock:(CDUnknownBlockType)arg4;
- (void)showQuickBindPhoneViewWithTitle:(id)arg1 inController:(id)arg2 withComposeBlock:(CDUnknownBlockType)arg3;
- (void)showQuickLoginViewWithType:(unsigned long long)arg1 title:(id)arg2 inController:(id)arg3 withCancelBlock:(CDUnknownBlockType)arg4 extParams:(id)arg5;
- (void)showQuickLoginViewWithTitle:(id)arg1 inController:(id)arg2 withCancelBlock:(CDUnknownBlockType)arg3 extParams:(id)arg4;
- (void)showQuickLoginViewWithTitle:(id)arg1 inController:(id)arg2 withCancelBlock:(CDUnknownBlockType)arg3;
- (void)showQuickLoginViewWithType:(unsigned long long)arg1 title:(id)arg2 inController:(id)arg3;
- (void)showQuickLoginViewWithTitle:(id)arg1 inController:(id)arg2;
- (void)showQuickLoginDefaultTitleViewinController:(id)arg1 withCancelBlock:(CDUnknownBlockType)arg2;
- (void)showQuickLoginDefaultTitleViewinController:(id)arg1;
- (void)presentRegisterViewInController:(id)arg1;
- (void)presentLoginViewInController:(id)arg1;
- (void)presentLoginViewInController:(id)arg1 withCancelBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

