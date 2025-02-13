//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UILabel, WBAdClickRect;
@protocol WBAdFlashButtonShowDelegate;

@interface WBAdFlashButtonShow : UIView
{
    id <WBAdFlashButtonShowDelegate> _flashButtonShowDelegate;
    WBAdClickRect *_adClickRect;
    UIImage *_normalImage;
    UIImage *_clickImage;
    UIImageView *_bottomImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) UIImage *clickImage; // @synthesize clickImage=_clickImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) WBAdClickRect *adClickRect; // @synthesize adClickRect=_adClickRect;
@property(nonatomic) __weak id <WBAdFlashButtonShowDelegate> flashButtonShowDelegate; // @synthesize flashButtonShowDelegate=_flashButtonShowDelegate;
- (void).cxx_destruct;
- (void)buttonTouchDown:(id)arg1;
- (void)buttonTouchUpInside:(id)arg1;
- (void)creatFlashAdButtonWithScaleSize:(struct CGSize)arg1;
- (void)setAdClickRect:(id)arg1 scaleSize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

