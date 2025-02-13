//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMSubLevelViewController.h"

@class UIButton, UIImageView, UILabel, UIView, XMShakeRewardItem, XMWebImageView;

@interface XMLottoryDetailViewController : XMSubLevelViewController
{
    XMShakeRewardItem *_item;
    XMWebImageView *_topImgView;
    UIView *_maskView;
    UILabel *_nameLabel;
    UIView *_nameBgView;
    UILabel *_subNameLabel;
    UIImageView *_expiredDateBgImgView;
    UILabel *_expiredDateLabel;
    UIImageView *_bottomImgView;
    UIButton *_getMyLottoryBtn;
    UILabel *_promCodeLabel;
}

@property(retain, nonatomic) UILabel *promCodeLabel; // @synthesize promCodeLabel=_promCodeLabel;
@property(retain, nonatomic) UIButton *getMyLottoryBtn; // @synthesize getMyLottoryBtn=_getMyLottoryBtn;
@property(retain, nonatomic) UIImageView *bottomImgView; // @synthesize bottomImgView=_bottomImgView;
@property(retain, nonatomic) UILabel *expiredDateLabel; // @synthesize expiredDateLabel=_expiredDateLabel;
@property(retain, nonatomic) UIImageView *expiredDateBgImgView; // @synthesize expiredDateBgImgView=_expiredDateBgImgView;
@property(retain, nonatomic) UILabel *subNameLabel; // @synthesize subNameLabel=_subNameLabel;
@property(retain, nonatomic) UIView *nameBgView; // @synthesize nameBgView=_nameBgView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) XMWebImageView *topImgView; // @synthesize topImgView=_topImgView;
@property(retain, nonatomic) XMShakeRewardItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)back;
- (void)onButtonPressed:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)customInitUI;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithShakeRewardItem:(id)arg1;

@end

