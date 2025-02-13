//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImage, UIImageView;
@protocol WBAdTrouserBeltViewDelegate;

@interface WBAdTrouserBeltView : UIView
{
    UIImage *_adImage;
    NSString *_closeImageUrl;
    id <WBAdTrouserBeltViewDelegate> _delegate;
    UIImageView *_shadowBackgroundView;
    UIImageView *_adImageView;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) UIImageView *shadowBackgroundView; // @synthesize shadowBackgroundView=_shadowBackgroundView;
@property(nonatomic) __weak id <WBAdTrouserBeltViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *closeImageUrl; // @synthesize closeImageUrl=_closeImageUrl;
@property(retain, nonatomic) UIImage *adImage; // @synthesize adImage=_adImage;
- (void).cxx_destruct;
- (void)closeButtonPress:(id)arg1;
- (void)adTapAction:(id)arg1;
- (void)reloadUIElements;
- (id)init;

@end

