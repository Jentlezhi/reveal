//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, WBStoryAutoScrollLabel;
@protocol WBStoryMusicMainListEditViewDelegate;

@interface WBStoryMusicMainListEditView : UIView
{
    double _labelLeftMargin;
    double _labelRightMargin;
    id <WBStoryMusicMainListEditViewDelegate> _delegate;
    UIImageView *_musicIcon;
    WBStoryAutoScrollLabel *_musicTitleLabel;
    UILabel *_musicLabel;
    UIButton *_musicEditButton;
    UIButton *_musicDelButton;
    UIButton *_alphaEditButton;
}

@property(retain, nonatomic) UIButton *alphaEditButton; // @synthesize alphaEditButton=_alphaEditButton;
@property(retain, nonatomic) UIButton *musicDelButton; // @synthesize musicDelButton=_musicDelButton;
@property(retain, nonatomic) UIButton *musicEditButton; // @synthesize musicEditButton=_musicEditButton;
@property(retain, nonatomic) UILabel *musicLabel; // @synthesize musicLabel=_musicLabel;
@property(retain, nonatomic) WBStoryAutoScrollLabel *musicTitleLabel; // @synthesize musicTitleLabel=_musicTitleLabel;
@property(retain, nonatomic) UIImageView *musicIcon; // @synthesize musicIcon=_musicIcon;
@property(nonatomic) __weak id <WBStoryMusicMainListEditViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setEditEnable:(_Bool)arg1;
- (void)editButtonTapped;
- (void)deleteButtonTapped;
- (void)updateMusicTitle:(id)arg1;
- (void)updateButtonWithTitle:(id)arg1;
- (void)initViews;
- (id)init;

@end

