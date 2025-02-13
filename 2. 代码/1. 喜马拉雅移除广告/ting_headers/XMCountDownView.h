//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, XMTimer;

@interface XMCountDownView : UIView
{
    UILabel *_countDownLabel;
    UILabel *_loadingLabel;
    long long _preparedTime;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _timerBlock;
    NSString *_titleFormat;
    XMTimer *_countDownTimer;
    UIView *_wrapperView;
}

+ (void)showCountDownWithDuration:(long long)arg1 countDownTitleFormat:(id)arg2 completed:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) UIView *wrapperView; // @synthesize wrapperView=_wrapperView;
@property(retain, nonatomic) XMTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(retain, nonatomic) NSString *titleFormat; // @synthesize titleFormat=_titleFormat;
@property(copy, nonatomic) CDUnknownBlockType timerBlock; // @synthesize timerBlock=_timerBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) long long preparedTime; // @synthesize preparedTime=_preparedTime;
- (void).cxx_destruct;
- (void)countDownAnimate;
- (void)showPreparedCountDown;
- (void)customedSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

