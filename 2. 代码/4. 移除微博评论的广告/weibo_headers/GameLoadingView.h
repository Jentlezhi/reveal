//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "LoadingViewHandle-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, WBGDotIndicatorView;

@interface GameLoadingView : UIView <LoadingViewHandle>
{
    NSString *_appid;
    UIImageView *_logoImg;
    UILabel *_nameLbl;
    WBGDotIndicatorView *_dotView;
    UILabel *_statusLbl;
    UIImageView *_tipImV;
    UIButton *_closeBtn;
    UIButton *_editBtn;
    NSString *_imgPath;
    CDUnknownBlockType _closeCallback;
}

@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
@property(copy, nonatomic) NSString *imgPath; // @synthesize imgPath=_imgPath;
@property(retain, nonatomic) UIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *tipImV; // @synthesize tipImV=_tipImV;
@property(retain, nonatomic) UILabel *statusLbl; // @synthesize statusLbl=_statusLbl;
@property(retain, nonatomic) WBGDotIndicatorView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UILabel *nameLbl; // @synthesize nameLbl=_nameLbl;
@property(retain, nonatomic) UIImageView *logoImg; // @synthesize logoImg=_logoImg;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (void).cxx_destruct;
- (void)_onButtonClickClose;
- (void)updateProgress:(long long)arg1 total:(long long)arg2;
- (void)setStatusProgress:(id)arg1;
- (void)setCenterImage:(id)arg1;
- (id)getView;
- (void)setGameName:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setTipText:(id)arg1;
- (void)_onButtonClickEdit:(id)arg1;
- (void)setUI;
- (void)_initView;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

