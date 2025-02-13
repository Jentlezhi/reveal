//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageImageTextTrendCard.h"

@class NSDictionary, NSString;

@interface WBPageArticleTrendCard : WBPageImageTextTrendCard
{
    NSString *_typeIcon;
    NSDictionary *_clickActionLog;
    NSString *_picLeftTitle;
    NSString *_picRightTitle;
}

+ (Class)trendPageCardViewClass;
+ (Class)viewClass;
@property(copy, nonatomic) NSString *picRightTitle; // @synthesize picRightTitle=_picRightTitle;
@property(copy, nonatomic) NSString *picLeftTitle; // @synthesize picLeftTitle=_picLeftTitle;
@property(retain, nonatomic) NSDictionary *clickActionLog; // @synthesize clickActionLog=_clickActionLog;
@property(copy, nonatomic) NSString *typeIcon; // @synthesize typeIcon=_typeIcon;
- (void).cxx_destruct;
- (_Bool)updateWithDictionary:(id)arg1;
- (double)trendItemSpace;
- (double)trendItemWidth;
- (id)rightTitleText;
- (id)leftTitleText;
- (id)trendCardViewModel2;
- (id)trendCardViewModel;

@end

