//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface XMMyCenterAlbumStarRatingPolymericView : UIView
{
    float _overallRating;
    float _contentRating;
    float _userRating;
    NSMutableArray *_myCenterAlbumStarRatingViewMArr;
}

+ (long long)myCenterAlbumStarRatingPolymericViewHeight;
@property(nonatomic) float userRating; // @synthesize userRating=_userRating;
@property(nonatomic) float contentRating; // @synthesize contentRating=_contentRating;
@property(nonatomic) float overallRating; // @synthesize overallRating=_overallRating;
@property(retain, nonatomic) NSMutableArray *myCenterAlbumStarRatingViewMArr; // @synthesize myCenterAlbumStarRatingViewMArr=_myCenterAlbumStarRatingViewMArr;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (void)setOverallRating:(float)arg1 contentRating:(float)arg2 userRating:(float)arg3;
- (id)init;
- (void)dealloc;

@end

