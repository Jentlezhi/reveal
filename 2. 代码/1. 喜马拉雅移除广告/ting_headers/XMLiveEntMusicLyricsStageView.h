//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMLiveEntCentralBasePanelView.h"

#import "XMLiveEntMusicLyricsManagerDelegate-Protocol.h"

@class NSString, SVGAPlayer, UIButton, UIImageView, UILabel, XMLiveEntLyricsView, XMTimer, YYThreadSafeArray;
@protocol XMLiveEntLyricsStageViewDelegate;

@interface XMLiveEntMusicLyricsStageView : XMLiveEntCentralBasePanelView <XMLiveEntMusicLyricsManagerDelegate>
{
    UIImageView *_stateView;
    SVGAPlayer *_waveformAniView;
    XMLiveEntLyricsView *_lyricsView;
    UIImageView *_markImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_orderButton;
    UILabel *_countdownLabel;
    UILabel *_currentSongLabel;
    UILabel *_nextSongLabel;
    UIButton *_effectButton;
    YYThreadSafeArray *_ktvSideInfoArray;
    XMTimer *_lyricTimer;
}

+ (double)panelHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) XMTimer *lyricTimer; // @synthesize lyricTimer=_lyricTimer;
@property(retain, nonatomic) YYThreadSafeArray *ktvSideInfoArray; // @synthesize ktvSideInfoArray=_ktvSideInfoArray;
@property(retain, nonatomic) UIButton *effectButton; // @synthesize effectButton=_effectButton;
@property(retain, nonatomic) UILabel *nextSongLabel; // @synthesize nextSongLabel=_nextSongLabel;
@property(retain, nonatomic) UILabel *currentSongLabel; // @synthesize currentSongLabel=_currentSongLabel;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) UIButton *orderButton; // @synthesize orderButton=_orderButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *markImageView; // @synthesize markImageView=_markImageView;
@property(retain, nonatomic) XMLiveEntLyricsView *lyricsView; // @synthesize lyricsView=_lyricsView;
@property(retain, nonatomic) SVGAPlayer *waveformAniView; // @synthesize waveformAniView=_waveformAniView;
@property(retain, nonatomic) UIImageView *stateView; // @synthesize stateView=_stateView;
- (void)songDataDownloadProgress:(double)arg1 ofSong:(unsigned long long)arg2;
- (void)songDataDownloaded:(id)arg1 ofSong:(unsigned long long)arg2;
- (void)lyricDownloaded:(id)arg1 ofSong:(unsigned long long)arg2;
- (void)parseWaveformSvga;
- (void)effectButtonClick;
- (void)orderButtonClick;
- (void)checkToSing:(id)arg1;
- (void)loadLyric:(id)arg1;
- (void)updateStageStatus:(id)arg1;
- (void)synchronizeInfoWithData:(id)arg1;
- (void)stopLyricTimer;
- (void)startLyricTimer:(double)arg1;
- (void)changeLyricProgress:(id)arg1;
- (void)dequeueNextLyric;
- (void)equeueLyric:(id)arg1;
- (void)processKtvSideInfo:(id)arg1;
- (void)synchronizeSideInfo:(id)arg1;
- (void)singStatusLayout;
- (void)confirmStatusLayout;
- (void)waitStatusLayout;
- (void)defaultStatusLayout;
- (void)updateStageStatusLayout;
- (void)micStatusChange:(int)arg1;
- (void)dismiss;
- (void)addKVO;
- (void)addStateView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <XMLiveEntLyricsStageViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

