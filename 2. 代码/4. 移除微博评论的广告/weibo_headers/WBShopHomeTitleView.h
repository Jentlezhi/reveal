//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel, WBShopCustomButton, WBShopHomeTitleModel;

@interface WBShopHomeTitleView : UIView
{
    _Bool _showSearch;
    _Bool _showMoreBtn;
    unsigned long long _type;
    NSString *_subTitle;
    WBShopHomeTitleModel *_titleModel;
    UIImageView *_imgView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_titleBgView;
    WBShopCustomButton *_searchBtn;
    WBShopCustomButton *_moreBtn;
    UIView *_topBgView;
}

+ (id)gradientFromColor:(id)arg1 toColor:(id)arg2 size:(struct CGSize)arg3;
@property(retain, nonatomic) UIView *topBgView; // @synthesize topBgView=_topBgView;
@property(retain, nonatomic) WBShopCustomButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) WBShopCustomButton *searchBtn; // @synthesize searchBtn=_searchBtn;
@property(retain, nonatomic) UIView *titleBgView; // @synthesize titleBgView=_titleBgView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) WBShopHomeTitleModel *titleModel; // @synthesize titleModel=_titleModel;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(nonatomic) _Bool showMoreBtn; // @synthesize showMoreBtn=_showMoreBtn;
@property(nonatomic) _Bool showSearch; // @synthesize showSearch=_showSearch;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)moreClick;
- (void)searchClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

