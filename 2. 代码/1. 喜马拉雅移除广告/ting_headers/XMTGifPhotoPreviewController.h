//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIProgressView, UIView, XMTAssetModel, XMTPhotoPreviewView;

@interface XMTGifPhotoPreviewController : UIViewController
{
    UIView *_toolBar;
    UIButton *_doneButton;
    UIProgressView *_progress;
    XMTPhotoPreviewView *_previewView;
    long long _originStatusBarStyle;
    XMTAssetModel *_model;
}

@property(retain, nonatomic) XMTAssetModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)callDelegateMethod;
- (void)doneButtonClick;
- (void)signleTapAction;
- (void)backButtonClick;
- (void)viewDidLayoutSubviews;
- (void)configBottomToolBar;
- (void)configPreviewView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

