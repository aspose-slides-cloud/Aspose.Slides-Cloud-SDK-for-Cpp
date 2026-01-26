// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Aspose" file="ApiBase.cs">
//   Copyright (c) 2020 Aspose.Slides for Cloud
// </copyright>
// <summary>
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
// 
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
// 
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
// </summary>
// --------------------------------------------------------------------------------------------------------------------



#include "../ClassRegistry.h"
#include "AudioFrame.h"

namespace asposeslidescloud {
namespace model {

AudioFrame::AudioFrame()
{
	m_AudioCdEndTrackIsSet = false;
	m_AudioCdEndTrackTimeIsSet = false;
	m_AudioCdStartTrackIsSet = false;
	m_AudioCdStartTrackTimeIsSet = false;
	m_EmbeddedIsSet = false;
	m_HideAtShowingIsSet = false;
	m_PlayLoopModeIsSet = false;
	m_VolumeValueIsSet = false;
	m_PlayAcrossSlidesIsSet = false;
	m_RewindAudioIsSet = false;
	m_FadeInDurationIsSet = false;
	m_FadeOutDurationIsSet = false;
	m_TrimFromStartIsSet = false;
	m_TrimFromEndIsSet = false;
	setType(L"AudioFrame");
}

AudioFrame::~AudioFrame()
{
}

int32_t AudioFrame::getAudioCdEndTrack() const
{
	return m_AudioCdEndTrack;
}

void AudioFrame::setAudioCdEndTrack(int32_t value)
{
	m_AudioCdEndTrack = value;
	m_AudioCdEndTrackIsSet = true;
}

bool AudioFrame::audioCdEndTrackIsSet() const
{
	return m_AudioCdEndTrackIsSet;
}

void AudioFrame::unsetAudioCdEndTrack()
{
	m_AudioCdEndTrackIsSet = false;
}

int32_t AudioFrame::getAudioCdEndTrackTime() const
{
	return m_AudioCdEndTrackTime;
}

void AudioFrame::setAudioCdEndTrackTime(int32_t value)
{
	m_AudioCdEndTrackTime = value;
	m_AudioCdEndTrackTimeIsSet = true;
}

bool AudioFrame::audioCdEndTrackTimeIsSet() const
{
	return m_AudioCdEndTrackTimeIsSet;
}

void AudioFrame::unsetAudioCdEndTrackTime()
{
	m_AudioCdEndTrackTimeIsSet = false;
}

int32_t AudioFrame::getAudioCdStartTrack() const
{
	return m_AudioCdStartTrack;
}

void AudioFrame::setAudioCdStartTrack(int32_t value)
{
	m_AudioCdStartTrack = value;
	m_AudioCdStartTrackIsSet = true;
}

bool AudioFrame::audioCdStartTrackIsSet() const
{
	return m_AudioCdStartTrackIsSet;
}

void AudioFrame::unsetAudioCdStartTrack()
{
	m_AudioCdStartTrackIsSet = false;
}

int32_t AudioFrame::getAudioCdStartTrackTime() const
{
	return m_AudioCdStartTrackTime;
}

void AudioFrame::setAudioCdStartTrackTime(int32_t value)
{
	m_AudioCdStartTrackTime = value;
	m_AudioCdStartTrackTimeIsSet = true;
}

bool AudioFrame::audioCdStartTrackTimeIsSet() const
{
	return m_AudioCdStartTrackTimeIsSet;
}

void AudioFrame::unsetAudioCdStartTrackTime()
{
	m_AudioCdStartTrackTimeIsSet = false;
}

bool AudioFrame::isEmbedded() const
{
	return m_Embedded;
}

void AudioFrame::setEmbedded(bool value)
{
	m_Embedded = value;
	m_EmbeddedIsSet = true;
}

bool AudioFrame::embeddedIsSet() const
{
	return m_EmbeddedIsSet;
}

void AudioFrame::unsetEmbedded()
{
	m_EmbeddedIsSet = false;
}

bool AudioFrame::isHideAtShowing() const
{
	return m_HideAtShowing;
}

void AudioFrame::setHideAtShowing(bool value)
{
	m_HideAtShowing = value;
	m_HideAtShowingIsSet = true;
}

bool AudioFrame::hideAtShowingIsSet() const
{
	return m_HideAtShowingIsSet;
}

void AudioFrame::unsetHideAtShowing()
{
	m_HideAtShowingIsSet = false;
}

bool AudioFrame::isPlayLoopMode() const
{
	return m_PlayLoopMode;
}

void AudioFrame::setPlayLoopMode(bool value)
{
	m_PlayLoopMode = value;
	m_PlayLoopModeIsSet = true;
}

bool AudioFrame::playLoopModeIsSet() const
{
	return m_PlayLoopModeIsSet;
}

void AudioFrame::unsetPlayLoopMode()
{
	m_PlayLoopModeIsSet = false;
}

utility::string_t AudioFrame::getPlayMode() const
{
	return m_PlayMode;
}

void AudioFrame::setPlayMode(utility::string_t value)
{
	m_PlayMode = value;
	
}

utility::string_t AudioFrame::getVolume() const
{
	return m_Volume;
}

void AudioFrame::setVolume(utility::string_t value)
{
	m_Volume = value;
	
}

double AudioFrame::getVolumeValue() const
{
	return m_VolumeValue;
}

void AudioFrame::setVolumeValue(double value)
{
	m_VolumeValue = value;
	m_VolumeValueIsSet = true;
}

bool AudioFrame::volumeValueIsSet() const
{
	return m_VolumeValueIsSet;
}

void AudioFrame::unsetVolumeValue()
{
	m_VolumeValueIsSet = false;
}

utility::string_t AudioFrame::getBase64Data() const
{
	return m_Base64Data;
}

void AudioFrame::setBase64Data(utility::string_t value)
{
	m_Base64Data = value;
	
}

bool AudioFrame::isPlayAcrossSlides() const
{
	return m_PlayAcrossSlides;
}

void AudioFrame::setPlayAcrossSlides(bool value)
{
	m_PlayAcrossSlides = value;
	m_PlayAcrossSlidesIsSet = true;
}

bool AudioFrame::playAcrossSlidesIsSet() const
{
	return m_PlayAcrossSlidesIsSet;
}

void AudioFrame::unsetPlayAcrossSlides()
{
	m_PlayAcrossSlidesIsSet = false;
}

bool AudioFrame::isRewindAudio() const
{
	return m_RewindAudio;
}

void AudioFrame::setRewindAudio(bool value)
{
	m_RewindAudio = value;
	m_RewindAudioIsSet = true;
}

bool AudioFrame::rewindAudioIsSet() const
{
	return m_RewindAudioIsSet;
}

void AudioFrame::unsetRewindAudio()
{
	m_RewindAudioIsSet = false;
}

double AudioFrame::getFadeInDuration() const
{
	return m_FadeInDuration;
}

void AudioFrame::setFadeInDuration(double value)
{
	m_FadeInDuration = value;
	m_FadeInDurationIsSet = true;
}

bool AudioFrame::fadeInDurationIsSet() const
{
	return m_FadeInDurationIsSet;
}

void AudioFrame::unsetFadeInDuration()
{
	m_FadeInDurationIsSet = false;
}

double AudioFrame::getFadeOutDuration() const
{
	return m_FadeOutDuration;
}

void AudioFrame::setFadeOutDuration(double value)
{
	m_FadeOutDuration = value;
	m_FadeOutDurationIsSet = true;
}

bool AudioFrame::fadeOutDurationIsSet() const
{
	return m_FadeOutDurationIsSet;
}

void AudioFrame::unsetFadeOutDuration()
{
	m_FadeOutDurationIsSet = false;
}

double AudioFrame::getTrimFromStart() const
{
	return m_TrimFromStart;
}

void AudioFrame::setTrimFromStart(double value)
{
	m_TrimFromStart = value;
	m_TrimFromStartIsSet = true;
}

bool AudioFrame::trimFromStartIsSet() const
{
	return m_TrimFromStartIsSet;
}

void AudioFrame::unsetTrimFromStart()
{
	m_TrimFromStartIsSet = false;
}

double AudioFrame::getTrimFromEnd() const
{
	return m_TrimFromEnd;
}

void AudioFrame::setTrimFromEnd(double value)
{
	m_TrimFromEnd = value;
	m_TrimFromEndIsSet = true;
}

bool AudioFrame::trimFromEndIsSet() const
{
	return m_TrimFromEndIsSet;
}

void AudioFrame::unsetTrimFromEnd()
{
	m_TrimFromEndIsSet = false;
}

std::shared_ptr<PictureFill> AudioFrame::getPictureFillFormat() const
{
	return m_PictureFillFormat;
}

void AudioFrame::setPictureFillFormat(std::shared_ptr<PictureFill> value)
{
	m_PictureFillFormat = value;
	
}

web::json::value AudioFrame::toJson() const
{
	web::json::value val = this->GeometryShape::toJson();
	if(m_AudioCdEndTrackIsSet)
	{
		val[utility::conversions::to_string_t("AudioCdEndTrack")] = ModelBase::toJson(m_AudioCdEndTrack);
	}
	if(m_AudioCdEndTrackTimeIsSet)
	{
		val[utility::conversions::to_string_t("AudioCdEndTrackTime")] = ModelBase::toJson(m_AudioCdEndTrackTime);
	}
	if(m_AudioCdStartTrackIsSet)
	{
		val[utility::conversions::to_string_t("AudioCdStartTrack")] = ModelBase::toJson(m_AudioCdStartTrack);
	}
	if(m_AudioCdStartTrackTimeIsSet)
	{
		val[utility::conversions::to_string_t("AudioCdStartTrackTime")] = ModelBase::toJson(m_AudioCdStartTrackTime);
	}
	if(m_EmbeddedIsSet)
	{
		val[utility::conversions::to_string_t("Embedded")] = ModelBase::toJson(m_Embedded);
	}
	if(m_HideAtShowingIsSet)
	{
		val[utility::conversions::to_string_t("HideAtShowing")] = ModelBase::toJson(m_HideAtShowing);
	}
	if(m_PlayLoopModeIsSet)
	{
		val[utility::conversions::to_string_t("PlayLoopMode")] = ModelBase::toJson(m_PlayLoopMode);
	}
	if (!m_PlayMode.empty())
	{
		val[utility::conversions::to_string_t("PlayMode")] = ModelBase::toJson(m_PlayMode);
	}
	if (!m_Volume.empty())
	{
		val[utility::conversions::to_string_t("Volume")] = ModelBase::toJson(m_Volume);
	}
	if(m_VolumeValueIsSet)
	{
		val[utility::conversions::to_string_t("VolumeValue")] = ModelBase::toJson(m_VolumeValue);
	}
	if (!m_Base64Data.empty())
	{
		val[utility::conversions::to_string_t("Base64Data")] = ModelBase::toJson(m_Base64Data);
	}
	if(m_PlayAcrossSlidesIsSet)
	{
		val[utility::conversions::to_string_t("PlayAcrossSlides")] = ModelBase::toJson(m_PlayAcrossSlides);
	}
	if(m_RewindAudioIsSet)
	{
		val[utility::conversions::to_string_t("RewindAudio")] = ModelBase::toJson(m_RewindAudio);
	}
	if(m_FadeInDurationIsSet)
	{
		val[utility::conversions::to_string_t("FadeInDuration")] = ModelBase::toJson(m_FadeInDuration);
	}
	if(m_FadeOutDurationIsSet)
	{
		val[utility::conversions::to_string_t("FadeOutDuration")] = ModelBase::toJson(m_FadeOutDuration);
	}
	if(m_TrimFromStartIsSet)
	{
		val[utility::conversions::to_string_t("TrimFromStart")] = ModelBase::toJson(m_TrimFromStart);
	}
	if(m_TrimFromEndIsSet)
	{
		val[utility::conversions::to_string_t("TrimFromEnd")] = ModelBase::toJson(m_TrimFromEnd);
	}
	if (m_PictureFillFormat != nullptr)
	{
		val[utility::conversions::to_string_t("PictureFillFormat")] = ModelBase::toJson(m_PictureFillFormat);
	}
	return val;
}

void AudioFrame::fromJson(web::json::value& val)
{
	this->GeometryShape::fromJson(val);
	web::json::value* jsonForAudioCdEndTrack = ModelBase::getField(val, "AudioCdEndTrack");
	if(jsonForAudioCdEndTrack != nullptr && !jsonForAudioCdEndTrack->is_null() && jsonForAudioCdEndTrack->is_number())
	{
		setAudioCdEndTrack(ModelBase::int32_tFromJson(*jsonForAudioCdEndTrack));
	}
	web::json::value* jsonForAudioCdEndTrackTime = ModelBase::getField(val, "AudioCdEndTrackTime");
	if(jsonForAudioCdEndTrackTime != nullptr && !jsonForAudioCdEndTrackTime->is_null() && jsonForAudioCdEndTrackTime->is_number())
	{
		setAudioCdEndTrackTime(ModelBase::int32_tFromJson(*jsonForAudioCdEndTrackTime));
	}
	web::json::value* jsonForAudioCdStartTrack = ModelBase::getField(val, "AudioCdStartTrack");
	if(jsonForAudioCdStartTrack != nullptr && !jsonForAudioCdStartTrack->is_null() && jsonForAudioCdStartTrack->is_number())
	{
		setAudioCdStartTrack(ModelBase::int32_tFromJson(*jsonForAudioCdStartTrack));
	}
	web::json::value* jsonForAudioCdStartTrackTime = ModelBase::getField(val, "AudioCdStartTrackTime");
	if(jsonForAudioCdStartTrackTime != nullptr && !jsonForAudioCdStartTrackTime->is_null() && jsonForAudioCdStartTrackTime->is_number())
	{
		setAudioCdStartTrackTime(ModelBase::int32_tFromJson(*jsonForAudioCdStartTrackTime));
	}
	web::json::value* jsonForEmbedded = ModelBase::getField(val, "Embedded");
	if(jsonForEmbedded != nullptr && !jsonForEmbedded->is_null())
	{
		setEmbedded(ModelBase::boolFromJson(*jsonForEmbedded));
	}
	web::json::value* jsonForHideAtShowing = ModelBase::getField(val, "HideAtShowing");
	if(jsonForHideAtShowing != nullptr && !jsonForHideAtShowing->is_null())
	{
		setHideAtShowing(ModelBase::boolFromJson(*jsonForHideAtShowing));
	}
	web::json::value* jsonForPlayLoopMode = ModelBase::getField(val, "PlayLoopMode");
	if(jsonForPlayLoopMode != nullptr && !jsonForPlayLoopMode->is_null())
	{
		setPlayLoopMode(ModelBase::boolFromJson(*jsonForPlayLoopMode));
	}
	web::json::value* jsonForPlayMode = ModelBase::getField(val, "PlayMode");
	if(jsonForPlayMode != nullptr && !jsonForPlayMode->is_null())
	{
		setPlayMode(ModelBase::stringFromJson(*jsonForPlayMode));
	}
	web::json::value* jsonForVolume = ModelBase::getField(val, "Volume");
	if(jsonForVolume != nullptr && !jsonForVolume->is_null())
	{
		setVolume(ModelBase::stringFromJson(*jsonForVolume));
	}
	web::json::value* jsonForVolumeValue = ModelBase::getField(val, "VolumeValue");
	if(jsonForVolumeValue != nullptr && !jsonForVolumeValue->is_null() && jsonForVolumeValue->is_number())
	{
		setVolumeValue(ModelBase::doubleFromJson(*jsonForVolumeValue));
	}
	web::json::value* jsonForBase64Data = ModelBase::getField(val, "Base64Data");
	if(jsonForBase64Data != nullptr && !jsonForBase64Data->is_null())
	{
		setBase64Data(ModelBase::stringFromJson(*jsonForBase64Data));
	}
	web::json::value* jsonForPlayAcrossSlides = ModelBase::getField(val, "PlayAcrossSlides");
	if(jsonForPlayAcrossSlides != nullptr && !jsonForPlayAcrossSlides->is_null())
	{
		setPlayAcrossSlides(ModelBase::boolFromJson(*jsonForPlayAcrossSlides));
	}
	web::json::value* jsonForRewindAudio = ModelBase::getField(val, "RewindAudio");
	if(jsonForRewindAudio != nullptr && !jsonForRewindAudio->is_null())
	{
		setRewindAudio(ModelBase::boolFromJson(*jsonForRewindAudio));
	}
	web::json::value* jsonForFadeInDuration = ModelBase::getField(val, "FadeInDuration");
	if(jsonForFadeInDuration != nullptr && !jsonForFadeInDuration->is_null() && jsonForFadeInDuration->is_number())
	{
		setFadeInDuration(ModelBase::doubleFromJson(*jsonForFadeInDuration));
	}
	web::json::value* jsonForFadeOutDuration = ModelBase::getField(val, "FadeOutDuration");
	if(jsonForFadeOutDuration != nullptr && !jsonForFadeOutDuration->is_null() && jsonForFadeOutDuration->is_number())
	{
		setFadeOutDuration(ModelBase::doubleFromJson(*jsonForFadeOutDuration));
	}
	web::json::value* jsonForTrimFromStart = ModelBase::getField(val, "TrimFromStart");
	if(jsonForTrimFromStart != nullptr && !jsonForTrimFromStart->is_null() && jsonForTrimFromStart->is_number())
	{
		setTrimFromStart(ModelBase::doubleFromJson(*jsonForTrimFromStart));
	}
	web::json::value* jsonForTrimFromEnd = ModelBase::getField(val, "TrimFromEnd");
	if(jsonForTrimFromEnd != nullptr && !jsonForTrimFromEnd->is_null() && jsonForTrimFromEnd->is_number())
	{
		setTrimFromEnd(ModelBase::doubleFromJson(*jsonForTrimFromEnd));
	}
	web::json::value* jsonForPictureFillFormat = ModelBase::getField(val, "PictureFillFormat");
	if(jsonForPictureFillFormat != nullptr && !jsonForPictureFillFormat->is_null())
	{
		std::shared_ptr<void> instanceForPictureFillFormat = asposeslidescloud::api::ClassRegistry::deserialize(L"PictureFill", *jsonForPictureFillFormat);
		setPictureFillFormat(std::static_pointer_cast<PictureFill>(instanceForPictureFillFormat));
	}
}

}
}

