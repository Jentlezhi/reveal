//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WBPageCardBusinessRankView : UIView
{
    UIImageView *_rankImageView;
    UILabel *_rankLabel;
    long long _rank;
}

@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) UIImageView *rankImageView; // @synthesize rankImageView=_rankImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)getRankImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

