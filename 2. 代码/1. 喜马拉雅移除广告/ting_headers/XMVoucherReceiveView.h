//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel, XMScrollLabel;

@interface XMVoucherReceiveView : UIView
{
    _Bool _activityEnd;
    UIImage *_brandLogo;
    NSString *_brandName;
    CDUnknownBlockType _voucherViewDidClick;
    UIImageView *_brandImage;
    UIView *_brandImageContainer;
    UIImageView *_brandNameBkg;
    XMScrollLabel *_nameLabel;
    UILabel *_topLabel;
}

+ (struct CGSize)suggestSize;
@property(retain, nonatomic) UILabel *topLabel; // @synthesize topLabel=_topLabel;
@property(retain, nonatomic) XMScrollLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *brandNameBkg; // @synthesize brandNameBkg=_brandNameBkg;
@property(retain, nonatomic) UIView *brandImageContainer; // @synthesize brandImageContainer=_brandImageContainer;
@property(retain, nonatomic) UIImageView *brandImage; // @synthesize brandImage=_brandImage;
@property(copy, nonatomic) CDUnknownBlockType voucherViewDidClick; // @synthesize voucherViewDidClick=_voucherViewDidClick;
@property(nonatomic) _Bool activityEnd; // @synthesize activityEnd=_activityEnd;
@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(retain, nonatomic) UIImage *brandLogo; // @synthesize brandLogo=_brandLogo;
- (void).cxx_destruct;
- (void)loadTestData;
- (id)brandImageWithLogo;
- (void)tap:(id)arg1;
- (void)startAnimation;
- (void)initUI;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

