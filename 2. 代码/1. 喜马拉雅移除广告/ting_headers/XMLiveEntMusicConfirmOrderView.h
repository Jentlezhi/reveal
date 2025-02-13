//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, XMTimer;

@interface XMLiveEntMusicConfirmOrderView : UIView
{
    CDUnknownBlockType _confirmBlk;
    CDUnknownBlockType _cancelBlk;
    UIImageView *_headImageView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    XMTimer *_countdownTimer;
    unsigned long long _countdown;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long countdown; // @synthesize countdown=_countdown;
@property(retain, nonatomic) XMTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(copy, nonatomic) CDUnknownBlockType cancelBlk; // @synthesize cancelBlk=_cancelBlk;
@property(copy, nonatomic) CDUnknownBlockType confirmBlk; // @synthesize confirmBlk=_confirmBlk;
- (void)countdownEvent;
- (void)stopCountdown;
- (void)startCountdown;
- (void)cancelButtonPressed;
- (void)confirmButtonPressed;
- (void)hide;
- (void)showInView:(id)arg1 forUser:(unsigned long long)arg2;
- (void)addCustomView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

