//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MJRefreshAutoFooter.h"

@class NSMutableDictionary, UILabel;

__attribute__((visibility("hidden")))
@interface MJRefreshAutoStateFooter : MJRefreshAutoFooter
{
    UILabel *_stateLabel;
    _Bool _refreshingTitleHidden;
    double _labelLeftInset;
    NSMutableDictionary *_stateTitles;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *stateTitles; // @synthesize stateTitles=_stateTitles;
@property(nonatomic, getter=isRefreshingTitleHidden) _Bool refreshingTitleHidden; // @synthesize refreshingTitleHidden=_refreshingTitleHidden;
@property(nonatomic) double labelLeftInset; // @synthesize labelLeftInset=_labelLeftInset;
- (void)setState:(long long)arg1;
- (void)placeSubviews;
- (void)prepare;
- (void)stateLabelClick;
- (void)setTitle:(id)arg1 forState:(long long)arg2;
@property(readonly, nonatomic) __weak UILabel *stateLabel;

@end

