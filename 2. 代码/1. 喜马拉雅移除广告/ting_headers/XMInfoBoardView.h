//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel, XMWebImageView;

@interface XMInfoBoardView : UIView
{
    XMWebImageView *_imageView;
    UILabel *_nicknameLabel;
    UIImageView *_bgImageView;
    _Bool _showBg;
    UIImage *_bgImage;
    NSString *_title;
    UIImage *_icon;
    NSString *_iconURL;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
- (void)updateInfo;
- (void)showBackgroundImage:(_Bool)arg1;
- (void)setupUnits;
- (id)initWithFrame:(struct CGRect)arg1;

@end

