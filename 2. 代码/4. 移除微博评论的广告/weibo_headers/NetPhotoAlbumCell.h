//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UIImageView, UILabel, WBViewController;

@interface NetPhotoAlbumCell : UITableViewCell
{
    UIImageView *_firstImageView;
    UIImageView *_secondImagView;
    UILabel *_firstLable;
    UILabel *_secondLable;
    NSArray *_items;
    WBViewController *_containerViewController;
}

+ (double)heightCellWithItem:(id)arg1;
@property(nonatomic) __weak WBViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void).cxx_destruct;
- (void)tapSubViewGesture:(id)arg1;
- (void)renderCellWithItems:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

