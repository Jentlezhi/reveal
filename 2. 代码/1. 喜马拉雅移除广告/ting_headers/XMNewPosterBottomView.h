//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol XMNewPosterBottomViewDelegate;

@interface XMNewPosterBottomView : UIView
{
    _Bool _shadowHidden;
    id <XMNewPosterBottomViewDelegate> _delegate;
    UIImageView *_shadowImage;
    UILabel *_makeMoneyLabel;
    UIButton *_wxSessionButton;
    UIButton *_wxTimelineButton;
    UILabel *_wxSessionLabel;
    UILabel *_wxTimelineLabel;
}

@property(retain, nonatomic) UILabel *wxTimelineLabel; // @synthesize wxTimelineLabel=_wxTimelineLabel;
@property(retain, nonatomic) UILabel *wxSessionLabel; // @synthesize wxSessionLabel=_wxSessionLabel;
@property(retain, nonatomic) UIButton *wxTimelineButton; // @synthesize wxTimelineButton=_wxTimelineButton;
@property(retain, nonatomic) UIButton *wxSessionButton; // @synthesize wxSessionButton=_wxSessionButton;
@property(retain, nonatomic) UILabel *makeMoneyLabel; // @synthesize makeMoneyLabel=_makeMoneyLabel;
@property(retain, nonatomic) UIImageView *shadowImage; // @synthesize shadowImage=_shadowImage;
@property(nonatomic) __weak id <XMNewPosterBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shadowHidden; // @synthesize shadowHidden=_shadowHidden;
- (void).cxx_destruct;
- (void)onWXTimelineButtonClicked:(id)arg1;
- (void)onWXSessionButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

