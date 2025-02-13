//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel, XMAlbumStarRatingView;

@interface XMMyCenterAlbumStarRatingView : UIView
{
    float _rating;
    unsigned long long _myCenterAlbumStarRatingViewType;
    UILabel *_describeScoreLB;
    XMAlbumStarRatingView *_scoreStarRatingView;
    UILabel *_scoreLB;
    NSArray *_myCenterAlbumStarRatingViewTypeArr;
    NSArray *_overallScoreArr;
    NSArray *_contentAndUserScoreArr;
    NSArray *_scoreStarRatingViewIconArr;
}

+ (long long)myCenterAlbumStarRatingViewHeight;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(retain, nonatomic) NSArray *scoreStarRatingViewIconArr; // @synthesize scoreStarRatingViewIconArr=_scoreStarRatingViewIconArr;
@property(retain, nonatomic) NSArray *contentAndUserScoreArr; // @synthesize contentAndUserScoreArr=_contentAndUserScoreArr;
@property(retain, nonatomic) NSArray *overallScoreArr; // @synthesize overallScoreArr=_overallScoreArr;
@property(retain, nonatomic) NSArray *myCenterAlbumStarRatingViewTypeArr; // @synthesize myCenterAlbumStarRatingViewTypeArr=_myCenterAlbumStarRatingViewTypeArr;
@property(retain, nonatomic) UILabel *scoreLB; // @synthesize scoreLB=_scoreLB;
@property(retain, nonatomic) XMAlbumStarRatingView *scoreStarRatingView; // @synthesize scoreStarRatingView=_scoreStarRatingView;
@property(retain, nonatomic) UILabel *describeScoreLB; // @synthesize describeScoreLB=_describeScoreLB;
@property(nonatomic) unsigned long long myCenterAlbumStarRatingViewType; // @synthesize myCenterAlbumStarRatingViewType=_myCenterAlbumStarRatingViewType;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)displayRating:(float)arg1;
- (id)initWithMyCenterAlbumStarRatingViewType:(unsigned long long)arg1;
- (void)dealloc;

@end

