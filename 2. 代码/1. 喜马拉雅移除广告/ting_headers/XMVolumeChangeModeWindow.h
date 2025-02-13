//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class LOTAnimationView, UILabel, UIView;
@protocol XMVolumeChangeModeWindowDelegate;

@interface XMVolumeChangeModeWindow : UIWindow
{
    UIView *_container;
    LOTAnimationView *_animationView;
    UILabel *_tipLabel;
    id <XMVolumeChangeModeWindowDelegate> _delegate;
}

@property(nonatomic) __weak id <XMVolumeChangeModeWindowDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) LOTAnimationView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (struct CGRect)hidingInRect;
- (void)closeAnimation;
- (void)playAnimation;
- (void)onClickAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

