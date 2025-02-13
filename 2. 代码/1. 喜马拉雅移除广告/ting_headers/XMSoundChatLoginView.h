//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface XMSoundChatLoginView : UIView
{
    _Bool _isLoginType;
    UIImageView *_imageView;
    UIButton *_okBtn;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(nonatomic) _Bool isLoginType; // @synthesize isLoginType=_isLoginType;
@property(retain, nonatomic) UIButton *okBtn; // @synthesize okBtn=_okBtn;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)onCloseClick;
- (void)onOkClick;
- (void)showWithLogin:(_Bool)arg1 clickBlock:(CDUnknownBlockType)arg2;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

