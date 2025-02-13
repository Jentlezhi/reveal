//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView, UIImageView, XMCrashAlertView;

@interface XMCrashFeedbackViewController : UIViewController
{
    UIActivityIndicatorView *_activeView;
    UIImageView *_launchImgView;
    XMCrashAlertView *_noPatchAlert;
}

@property(retain, nonatomic) XMCrashAlertView *noPatchAlert; // @synthesize noPatchAlert=_noPatchAlert;
@property(retain, nonatomic) UIImageView *launchImgView; // @synthesize launchImgView=_launchImgView;
@property(retain, nonatomic) UIActivityIndicatorView *activeView; // @synthesize activeView=_activeView;
- (void).cxx_destruct;
- (void)crashAlertView:(id)arg1 didClickType:(int)arg2;
- (void)endActiveLoading;
- (void)startActiveLoading;
- (void)showLaunchView;
- (void)showActiveView;
- (void)alertNoPatch;
- (void)resetAndRelaunch;
- (void)showAlertNeedRepair;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

@end

