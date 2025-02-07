//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HeadlineTableViewBaseCell.h"

@class UIImageView, WBImageView;

@interface HeadlinePicLayoutViewCell : HeadlineTableViewBaseCell
{
    WBImageView *_imageView1;
    WBImageView *_imageView2;
    WBImageView *_imageView3;
    UIImageView *_gifIcon1;
    UIImageView *_gifIcon2;
    UIImageView *_gifIcon3;
}

@property(retain, nonatomic) UIImageView *gifIcon3; // @synthesize gifIcon3=_gifIcon3;
@property(retain, nonatomic) UIImageView *gifIcon2; // @synthesize gifIcon2=_gifIcon2;
@property(retain, nonatomic) UIImageView *gifIcon1; // @synthesize gifIcon1=_gifIcon1;
@property(retain, nonatomic) WBImageView *imageView3; // @synthesize imageView3=_imageView3;
@property(retain, nonatomic) WBImageView *imageView2; // @synthesize imageView2=_imageView2;
@property(retain, nonatomic) WBImageView *imageView1; // @synthesize imageView1=_imageView1;
- (void).cxx_destruct;
- (void)fitPublicBar:(double)arg1;
- (void)fitMultiplePicture:(double)arg1;
- (void)relayoutTimeLabel;
- (void)relayoutSubViews;
- (void)reloadUIElements;
- (void)setItemData:(id)arg1 panTip:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

