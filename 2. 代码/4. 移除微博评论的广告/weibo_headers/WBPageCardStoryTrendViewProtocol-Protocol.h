//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBStoryItem, WBStoryTrendUserView;

@protocol WBPageCardStoryTrendViewProtocol <NSObject>
@property(nonatomic) _Bool blocked;
@property(nonatomic) _Bool readDone;
@property(nonatomic) _Bool loading;
@property(retain, nonatomic) WBStoryItem *item;
@property(readonly, nonatomic) WBStoryTrendUserView *userView;
- (void)updateCellState;
@end

