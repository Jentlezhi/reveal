//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, XMAlbumItem, XMWebImageView;

@interface XMSuggestViewCell : UICollectionViewCell
{
    XMWebImageView *_albumImageView;
    UILabel *_albumTitle;
    UILabel *_albumDetail;
    XMAlbumItem *_albumItem;
}

@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
- (void).cxx_destruct;
- (void)initUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

