//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIImageView, UILabel;

@interface TBLiveTipView : UIView
{
    UIView *_bgView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    CAGradientLayer *_redGradientLayer;
    CAGradientLayer *_purperGradientLayer;
    CAGradientLayer *_customerLiveGradientLayer;
}

+ (id)getImageFromView:(id)arg1;
+ (id)iconFontImageWithName:(id)arg1;
+ (id)pointsIconFontImage;
+ (id)rankIconFontImage;
+ (id)weIconFontImage;
+ (id)cartIconFontImage;
@property(retain, nonatomic) CAGradientLayer *customerLiveGradientLayer; // @synthesize customerLiveGradientLayer=_customerLiveGradientLayer;
@property(retain, nonatomic) CAGradientLayer *purperGradientLayer; // @synthesize purperGradientLayer=_purperGradientLayer;
@property(retain, nonatomic) CAGradientLayer *redGradientLayer; // @synthesize redGradientLayer=_redGradientLayer;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)customerLiveGradientLayer:(id)arg1;
- (void)setModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

