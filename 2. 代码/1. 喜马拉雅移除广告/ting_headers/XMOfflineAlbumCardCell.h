//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, XMAlbumItem, XMWebImageView;

@interface XMOfflineAlbumCardCell : UICollectionViewCell
{
    XMWebImageView *_coverImageView;
    UILabel *_titlelabel;
    XMAlbumItem *_albumItem;
}

@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
@property(retain, nonatomic) UILabel *titlelabel; // @synthesize titlelabel=_titlelabel;
@property(retain, nonatomic) XMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

