//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WBVideoBlackGuideView : UIView
{
    UIImageView *_littleVideoImageView;
    UILabel *_tipLabel;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *littleVideoImageView; // @synthesize littleVideoImageView=_littleVideoImageView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)stopGuideAnimating;
- (void)startGuideAnimating;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

