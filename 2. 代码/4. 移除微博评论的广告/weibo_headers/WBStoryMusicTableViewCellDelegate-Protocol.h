//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITableViewCell;

@protocol WBStoryMusicTableViewCellDelegate <NSObject>
- (void)musicTableViewCellDidClickDisableButton:(UITableViewCell *)arg1;
- (_Bool)musicTableViewCellDidClickFavoriteButton:(UITableViewCell *)arg1;
- (void)musicTableViewCellDidClickContentButton:(UITableViewCell *)arg1;
- (void)musicTableViewCellDidClickSelectButton:(UITableViewCell *)arg1;
- (void)musicTableViewCellDidClickMoreButton:(UITableViewCell *)arg1;
@end

