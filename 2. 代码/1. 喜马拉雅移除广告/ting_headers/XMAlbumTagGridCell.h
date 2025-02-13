//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, UIButton, UIImageView, UILabel, UIView, XMAlbumTagItem;
@protocol XMAlbumTagGridCellDelegate;

@interface XMAlbumTagGridCell : UICollectionViewCell
{
    _Bool _tagSelected;
    UILabel *_titleLabel;
    UIView *_topLine;
    UIView *_leftLine;
    UIView *_bottomLine;
    UIView *_rightLine;
    UIView *_outerBorder;
    UIImageView *_selectedIcon;
    UIButton *_deleteBtn;
    NSIndexPath *_indexPath;
    XMAlbumTagItem *_tagItem;
    id <XMAlbumTagGridCellDelegate> _delegate;
    UIView *_selBg;
}

+ (id)reuseID;
@property(retain, nonatomic) UIView *selBg; // @synthesize selBg=_selBg;
@property(nonatomic) __weak id <XMAlbumTagGridCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool tagSelected; // @synthesize tagSelected=_tagSelected;
@property(retain, nonatomic) XMAlbumTagItem *tagItem; // @synthesize tagItem=_tagItem;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIImageView *selectedIcon; // @synthesize selectedIcon=_selectedIcon;
@property(retain, nonatomic) UIView *outerBorder; // @synthesize outerBorder=_outerBorder;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)deleteBtnDidTap:(id)arg1;
- (void)setupCell;
- (void)configWithItem:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

