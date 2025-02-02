// Copyright (c) 2012 The WebM project authors. All Rights Reserved.
//
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file in the root of the source
// tree. An additional intellectual property rights grant can be found
// in the file PATENTS.  All contributing project authors may
// be found in the AUTHORS file in the root of the source tree.

#ifndef WEBMIDS_HPP
#define WEBMIDS_HPP

namespace mkvmuxer {

enum MkvId {
  kMkvEBML                    = 0x1A45DFA3,
  kMkvEBMLVersion             = 0x4286,
  kMkvEBMLReadVersion         = 0x42F7,
  kMkvEBMLMaxIDLength         = 0x42F2,
  kMkvEBMLMaxSizeLength       = 0x42F3,
  kMkvDocType                 = 0x4282,
  kMkvDocTypeVersion          = 0x4287,
  kMkvDocTypeReadVersion      = 0x4285,
  kMkvVoid                    = 0xEC,
  kMkvSignatureSlot           = 0x1B538667,
  kMkvSignatureAlgo           = 0x7E8A,
  kMkvSignatureHash           = 0x7E9A,
  kMkvSignaturePublicKey      = 0x7EA5,
  kMkvSignature               = 0x7EB5,
  kMkvSignatureElements       = 0x7E5B,
  kMkvSignatureElementList    = 0x7E7B,
  kMkvSignedElement           = 0x6532,
  //segment
  kMkvSegment                 = 0x18538067,
  //Meta Seek Information
  kMkvSeekHead                = 0x114D9B74,
  kMkvSeek                    = 0x4DBB,
  kMkvSeekID                  = 0x53AB,
  kMkvSeekPosition            = 0x53AC,
  //Segment Information
  kMkvInfo                    = 0x1549A966,
  kMkvTimecodeScale           = 0x2AD7B1,
  kMkvDuration                = 0x4489,
  kMkvDateUTC                 = 0x4461,
  kMkvMuxingApp               = 0x4D80,
  kMkvWritingApp              = 0x5741,
  //Cluster
  kMkvCluster                 = 0x1F43B675,
  kMkvTimecode                = 0xE7,
  kMkvPrevSize                = 0xAB,
  kMkvBlockGroup              = 0xA0,
  kMkvBlock                   = 0xA1,
  kMkvBlockDuration           = 0x9B,
  kMkvReferenceBlock          = 0xFB,
  kMkvLaceNumber              = 0xCC,
  kMkvSimpleBlock             = 0xA3,
  kMkvBlockAdditions          = 0x75A1,
  kMkvBlockMore               = 0xA6,
  kMkvBlockAddID              = 0xEE,
  kMkvBlockAdditional         = 0xA5,
  //Track
  kMkvTracks                  = 0x1654AE6B,
  kMkvTrackEntry              = 0xAE,
  kMkvTrackNumber             = 0xD7,
  kMkvTrackUID                = 0x73C5,
  kMkvTrackType               = 0x83,
  kMkvFlagEnabled             = 0xB9,
  kMkvFlagDefault             = 0x88,
  kMkvFlagForced              = 0x55AA,
  kMkvFlagLacing              = 0x9C,
  kMkvDefaultDuration         = 0x23E383,
  kMkvName                    = 0x536E,
  kMkvLanguage                = 0x22B59C,
  kMkvCodecID                 = 0x86,
  kMkvCodecPrivate            = 0x63A2,
  kMkvCodecName               = 0x258688,
  kMkvMaxBlockAdditionID      = 0x55EE,
  //video
  kMkvVideo                   = 0xE0,
  kMkvFlagInterlaced          = 0x9A,
  kMkvStereoMode              = 0x53B8,
  kMkvAlphaMode               = 0x53C0,
  kMkvPixelWidth              = 0xB0,
  kMkvPixelHeight             = 0xBA,
  kMkvPixelCropBottom         = 0x54AA,
  kMkvPixelCropTop            = 0x54BB,
  kMkvPixelCropLeft           = 0x54CC,
  kMkvPixelCropRight          = 0x54DD,
  kMkvDisplayWidth            = 0x54B0,
  kMkvDisplayHeight           = 0x54BA,
  kMkvDisplayUnit             = 0x54B2,
  kMkvAspectRatioType         = 0x54B3,
  kMkvFrameRate               = 0x2383E3,
  //end video
  //audio
  kMkvAudio                   = 0xE1,
  kMkvSamplingFrequency       = 0xB5,
  kMkvOutputSamplingFrequency = 0x78B5,
  kMkvChannels = 0x9F,
  kMkvBitDepth                = 0x6264,
  //end audio
  //ContentEncodings
  kMkvContentEncodings        = 0x6D80,
  kMkvContentEncoding         = 0x6240,
  kMkvContentEncodingOrder    = 0x5031,
  kMkvContentEncodingScope    = 0x5032,
  kMkvContentEncodingType     = 0x5033,
  kMkvContentEncryption       = 0x5035,
  kMkvContentEncAlgo          = 0x47E1,
  kMkvContentEncKeyID         = 0x47E2,
  kMkvContentEncAESSettings   = 0x47E7,
  kMkvAESSettingsCipherMode   = 0x47E8,
  kMkvAESSettingsCipherInitData = 0x47E9,
  //end ContentEncodings
  //Cueing Data
  kMkvCues                    = 0x1C53BB6B,
  kMkvCuePoint                = 0xBB,
  kMkvCueTime                 = 0xB3,
  kMkvCueTrackPositions       = 0xB7,
  kMkvCueTrack                = 0xF7,
  kMkvCueClusterPosition      = 0xF1,
  kMkvCueBlockNumber          = 0x5378,
  //Chapters
  kMkvChapters                = 0x1043A770,
  kMkvEditionEntry            = 0x45B9,
  kMkvChapterAtom             = 0xB6,
  kMkvChapterUID              = 0x73C4,
  kMkvChapterStringUID        = 0x5654,
  kMkvChapterTimeStart        = 0x91,
  kMkvChapterTimeEnd          = 0x92,
  kMkvChapterDisplay          = 0x80,
  kMkvChapString              = 0x85,
  kMkvChapLanguage            = 0x437C,
  kMkvChapCountry             = 0x437E
};

}  // end namespace mkvmuxer

#endif // WEBMIDS_HPP
