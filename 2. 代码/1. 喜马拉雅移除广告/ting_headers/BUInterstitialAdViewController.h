//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class BUDislikeButton, BUInterstitialAd, BUMaterialMeta, UIActivityIndicatorView, UIImageView, UITapGestureRecognizer;

@interface BUInterstitialAdViewController : UIViewController
{
    BUInterstitialAd *_interstitialAd;
    BUDislikeButton *_closeButton;
    BUMaterialMeta *_materialMeta;
    UIImageView *_interstitialAdView;
    UITapGestureRecognizer *_tapGesture;
    UIActivityIndicatorView *_indicatorView;
    UIImageView *_buLogoIcon;
    CDUnknownBlockType _dismissblock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissblock; // @synthesize dismissblock=_dismissblock;
@property(retain, nonatomic) UIImageView *buLogoIcon; // @synthesize buLogoIcon=_buLogoIcon;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIImageView *interstitialAdView; // @synthesize interstitialAdView=_interstitialAdView;
@property(retain, nonatomic) BUMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(retain, nonatomic) BUDislikeButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) BUInterstitialAd *interstitialAd; // @synthesize interstitialAd=_interstitialAd;
- (void).cxx_destruct;
- (void)addAccessibilityIdentifier;
- (void)didReceiveMemoryWarning;
- (id)c_xyDict;
- (void)adTapped:(id)arg1;
- (void)dismissInterstitialAdWithAnimation:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (void)closeButtonTapped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateAdViews:(id)arg1;
- (void)buildupView;
- (void)viewDidLoad;
- (id)initViewControllerWithAd:(id)arg1 dismissBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;

@end

