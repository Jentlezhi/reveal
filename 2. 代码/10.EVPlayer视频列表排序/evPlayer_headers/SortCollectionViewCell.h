//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class MItem, UIButton, UIImageView;

@interface SortCollectionViewCell : UICollectionViewCell
{
    UIButton *_imageButton;
    UIButton *_titleButton;
    MItem *_videoItemModel;
    UIImageView *_topRightImageV;
}

@property(retain, nonatomic) UIImageView *topRightImageV; // @synthesize topRightImageV=_topRightImageV;
@property(retain, nonatomic) MItem *videoItemModel; // @synthesize videoItemModel=_videoItemModel;
@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
- (void).cxx_destruct;
- (void)setTheCellRightTopImageContent:(unsigned long long)arg1;
- (void)setTheCellContent:(id)arg1;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

