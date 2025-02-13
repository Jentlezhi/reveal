//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, UIButton, UILabel, XMNPInteractiveModel;

@interface XMNPInteractiveView : UIView
{
    _Bool _isTimerFire;
    XMNPInteractiveModel *_interactiveModel;
    CDUnknownBlockType _didClickActionButton;
    CDUnknownBlockType _didClickCloseButton;
    CDUnknownBlockType _countdownCallback;
    UILabel *_titleLB;
    UIButton *_actionBtn;
    UIView *_touchDownActionLayer;
    UIButton *_closeBtn;
    UILabel *_countdownLB;
    NSTimer *_timer;
    double _dynamicCountdown;
}

@property(nonatomic) double dynamicCountdown; // @synthesize dynamicCountdown=_dynamicCountdown;
@property(nonatomic) _Bool isTimerFire; // @synthesize isTimerFire=_isTimerFire;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *countdownLB; // @synthesize countdownLB=_countdownLB;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *touchDownActionLayer; // @synthesize touchDownActionLayer=_touchDownActionLayer;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(copy, nonatomic) CDUnknownBlockType countdownCallback; // @synthesize countdownCallback=_countdownCallback;
@property(copy, nonatomic) CDUnknownBlockType didClickCloseButton; // @synthesize didClickCloseButton=_didClickCloseButton;
@property(copy, nonatomic) CDUnknownBlockType didClickActionButton; // @synthesize didClickActionButton=_didClickActionButton;
@property(retain, nonatomic) XMNPInteractiveModel *interactiveModel; // @synthesize interactiveModel=_interactiveModel;
- (void).cxx_destruct;
- (void)onCloseBtn;
- (void)onActionBtnUpOutside;
- (void)onActionBtnDown;
- (void)onActionBtn;
- (void)layoutSubviews;
- (void)stopCountdown;
- (void)startCountdown;
- (void)updateCountdownLabel;
- (void)invalidateTimer;
- (void)initializeTimer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

