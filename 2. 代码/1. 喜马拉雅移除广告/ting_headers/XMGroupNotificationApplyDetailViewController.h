//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

@class UIButton, XMGroupNotificationItem;

@interface XMGroupNotificationApplyDetailViewController : XMBaseVC
{
    XMGroupNotificationItem *_notification;
    UIButton *_agreeButton;
    UIButton *_refuseButton;
}

@property(retain, nonatomic) UIButton *refuseButton; // @synthesize refuseButton=_refuseButton;
@property(retain, nonatomic) UIButton *agreeButton; // @synthesize agreeButton=_agreeButton;
@property(retain, nonatomic) XMGroupNotificationItem *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (void)agreeApplicantToJoinGroup;
- (void)refuseApplicantToJoinGroup;
- (void)agreeAdminInvite;
- (void)refuseAdminInvite;
- (void)refuseAction;
- (void)agreeAction;
- (void)onUserAction;
- (void)onContentTap;
- (void)jumpToGroupTalkingCtrl;
- (id)contentAttributedString;
- (void)updateUI;
- (void)buildUI;
- (void)viewDidLoad;

@end

