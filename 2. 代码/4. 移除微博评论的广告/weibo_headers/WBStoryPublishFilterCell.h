//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, WBStoryPublishFilterModel;

@interface WBStoryPublishFilterCell : UICollectionViewCell
{
    WBStoryPublishFilterModel *_item;
    UIImageView *_markImgView;
    UIImageView *_filterImgView;
    UILabel *_filterNameLabel;
}

@property(retain, nonatomic) UILabel *filterNameLabel; // @synthesize filterNameLabel=_filterNameLabel;
@property(retain, nonatomic) UIImageView *filterImgView; // @synthesize filterImgView=_filterImgView;
@property(retain, nonatomic) UIImageView *markImgView; // @synthesize markImgView=_markImgView;
@property(nonatomic) WBStoryPublishFilterModel *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

