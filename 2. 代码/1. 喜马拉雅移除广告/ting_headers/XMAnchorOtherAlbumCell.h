//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSTextAttachment, UIButton, UILabel, XMAlbum, XMAlbumCoverImageView;

@interface XMAnchorOtherAlbumCell : UICollectionViewCell
{
    XMAlbumCoverImageView *_albumView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    XMAlbum *_albumItem;
    UILabel *_playCountLabel;
    UILabel *_albumCountLabel;
    XMAlbum *_model;
    NSTextAttachment *_playCountAttch;
    NSTextAttachment *_albumCountAttch;
    UIButton *_moreButton;
}

@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) NSTextAttachment *albumCountAttch; // @synthesize albumCountAttch=_albumCountAttch;
@property(retain, nonatomic) NSTextAttachment *playCountAttch; // @synthesize playCountAttch=_playCountAttch;
@property(retain, nonatomic) XMAlbum *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *albumCountLabel; // @synthesize albumCountLabel=_albumCountLabel;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) XMAlbum *albumItem; // @synthesize albumItem=_albumItem;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMAlbumCoverImageView *albumView; // @synthesize albumView=_albumView;
- (void).cxx_destruct;
- (void)setContentWithModel:(id)arg1 ShowMoreButton:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

